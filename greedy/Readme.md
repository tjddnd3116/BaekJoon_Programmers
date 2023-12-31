# 탐욕 알고리즘이란?
- Greedy는 *탐욕스러운, 욕심많은* 이란 뜻이다.
- 탐욕 알고리즘은 말 그대로 선택의 순간마다 당장 눈앞에 보이는 최적의 상황만을 쫒아 최종적인 해답에 도달하는 방법
- 탐욕 알고리즘은 최적해를 구하는 데에 사용되는 근사적인 방법이다.
- 탐욕 알고리즘은 여러 경우 중 하나를 결정해야 할 때마다 그순간에 최적이라고 생각되는 것을 선택해 나가는 방식으로 진행하여 최종적인 해답에 도달한다.
- 순간마다 하는 선택은 그 순간에 대해 지역적으로는 최적이지만, 그 선택들을 계속 수집하여 최종적(전역적)인 해답을 만들었다고 해서 그것이 최적이라는 보장은 없다.
하지만 탐욕 알고리즘을 적용할 수 있는 문제들을 지역적으로 최적이면서 전역적으로 최적인 문제들이다.

## 탐욕 알고리즘 문제를 해결하는 방법
1. 선택 절차(Selection Procedure): 현재 상태에서 최적의 해답을 선택한다.
2. 적절성 검사(Feasibility Check): 선택된 해가 문제의 조건을 만족하는지 검사한다.
3. 해답 검사(Solution Check): 원래의 문제가 해결되었는지 검사하고, 해결되지 않았다면 선택 절차로 돌아가 위의 과정을 반복한다.

## 탐욕 알고리즘을 적용하려면 문제가 다음 2가지 조건을 성립하여야 한다.
- 탐욕 알고리즘이 잘 작동하는 문제는 대부분 탐욕스런 선택 조건과 최적 부분 구조 조건이라는 두가지 조건이 만족된다.
- 탐욕스런 선택 조건은 앞의 선택이 이후의 선택에 영향을 주지 않는다는 것이며, 최적 부분 구조 조건은 문제에 대한 최적해가 부분문제에 대해서도 역시 최적해라는 것이다.

1. 탐욕적 선택 속성: 앞의 선택이 이후의 선택에 영향을 주지 않는다.
2. 최적 부분 구조: 문제에 대한 최종 해결 방법은 부분 문제에 대한 최적 문제 해결 방법으로 구성된다.

- 이러한 조건이 성립하지 않는 경우에는 탐욕 알고리즘은 최적해를 구하지 못한다.
- 하지만, 이러한 경우에도 탐욕 알고리즘은 근사 알고리즘으로 사용이 가능할 수 있으며, 대부분의 경우 계산 속도가 빠르기 때문에 실용적으로 사용할 수 있다.
- 이 경우 역시 어느 정도까지 최적해에 가까운 해를 구할 수 있는지를 보장하려면 엄밀한 증명이 필요하다.
- 어떤 특별한 구조가 있는 문제에 대해서는 탐욕 알고리즘이 언제나 최적해를 찾아낼 수 있다.
- 이 구조를 메트로이드라 한다.
- 매트로이드는 모든 문제에서 나타나는 것은 아니나, 여러 곳에서 발견되지 때문에 탐욕 알고리즘의 활용도를 높여 준다.
	
		탐욕 알고리즘은 항상 최적의 결과를 도출하는 것은 아니지만
		어느 정도 최적에 근사한 값을 빠르게 도출할 수 있는 장점이 있다.
		이 장점으로 인해 탐욕 알고리즘은 근사 알고리즘으로 사용할 수 있다.

		탐욕 알고리즘을 적용해도 언제나 최적해를 구할 수 있는 문제(매드로이드)가 있고
		이러한 문제에 탐욕 알고리즘을 사용해서 빠른 계산 속도로 답을 구할 수 있다.
		그래서 실용적으로 사용할 수 있다.

## 근사 알고리즘이란?
- 근사 알고리즘은 어떤 최적화 문제에 대한 해의 근사값을 구하는 알고리즘을 의미한다.
- 이 알고리즘은 가장 최적화되는 답을 구할 수는 없지만, 비교적 빠른 시간에 계산이 가능하며 어느 정도 보장된 근사해를 계산할 수 있다.

# 탐욕 알고리즘 일상 예시1 - 매트로이드는
하나몬은 오들도 편의점에서 열심히 아르바이트를 하고 있다.<br>
손님으로 온 박해커는 과자와 음료를 하나씩 집어 들었고, 물건 가격은 총 4,040원이 나왔다.<br>
박해커는 계산을 하기 위해 5,000원을 내밀며, 거스름돈은 동전의 개수를 최조한으로 하여 거슬러 달라고 하였다.

## 이때 하나몬은 어떻게 거슬로 주어야 할까?
- 탐욕 알고리즘으로 동전의 개수를 헤아리는 일은 일반적으로 거스름돈으로 동전을 선택하는 방법과 동일하다.
- 거스름돈 960원을 채우기 위해서 먼저 500원짜리 동전을 한 개를 선택한다.
- 그다음은 100원짜리 동전을 네 개 선택하고, 그다음엔 50원짜리 동전과 10원짜리 동전을 각각 하나씩 선택할 것이다.

## 탐욕 알고리즘의 문제 해결 과정을 적용
1. 선택절차
	- 거스름돈의 동전 개수를 줄이기 위해 현재 가장 가치가 높은 동전을 우선 선택한다.
2. 적절성 검사
	- 1번 과정을 통해 선택된 동전들의 합이 거슬러 줄 금액을 초과하는지 검사한다.
	- 초과하면 가장 마지막에 선택한 동전을 삭제하고, 1번으로 돌아가 한 단계 작은 동전을 선택한다.
3. 해답 검사
	- 선택된 동전들의 합이 거슬러 줄 금액과 일치하는지 검사한다.
	- 액수가 부족하면 1번 과정부터 다시 반복한다.

## 이 과정을 통해 문제에 대한 해답
- 가장 가치가 높은 동전인 500원 1개를 먼저 거슬로 주고 잔액을 확인한 뒤, 이후 100원 4개, 50원 1개, 10원 1개의 순서대로 거슬러 준다.

		이 문제 구조는 매트로이드이다. 탐욕 알고리즘을 사용해도 언제나 최적해를 찾아 낼 수 있다.


# 탐욕 알고리즘 일상 예시 2
하나몬이 아르바이트를 하러 간 사이에, 안타깝게도 하나몬의 집에 도둑이 들었다.<br>
도둑의 가방은 35kg까지의 물건만 담을 수 있고, 하나몬의 집에는 4개의 물건이 있다.<br>

# 도둑이 탐욕 알고리즘을 사용한다면?
1. 가방에 넣을 수 있는 물건 중 가장 비싼 물건을 넣는다.
2. 그다음으로 넣을 수 있는 물건 중 가방 비싼 물건을 넣는다.
3. 이 과정을 반복한다.

- 도둑의 가방은 35kg까지 담을 수 있고, 그림이 가장 비싸니 그림을 먼저 가방에 담을 수 있다.
- 남는 공간이 5kg밖에 남지 않아 더 훔칠 수 있는 물건이 없다. 그리고 이때 훔친 물건의 총 가치는 그림 하나의 가치와 같은 $3000이다.
- 만약 그림 대신 컴퓨터와 반지를 가방에 담았다면 어떨까?
- 35kg이 넘지 않으면서 총 가치는 $3500으로 그림 하나만 훔칠 때보다 더 많은 가치의 물건을 훔칠 수 있다. (즉, 탐욕 알고리즘으로 최적해를 구하진 못했다.)

		탐욕 알고리즘은 문제를 해결하는 과정에서 매 순간, 최적이라 생각되는 해답을 찾으며, 이를 토대로 최종 문제의 해답에 도달하는 문제 해결 방식이다.

		그러나 도둑의 예와 같이 항상 최적의 결과를 보장하지는 못한다는 점을 명심해야 한다.

		따라서 두 가지의 조건을 만족하는 *특정한 상황* 이 아니면 탐욕 알고리즘은 최적의 해를 보장하지 못한다.
