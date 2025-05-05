@interface CDBudget : NSObject
@property (nonatomic) Q integerId;
@property (nonatomic) NSString name;
@property (nonatomic) q type;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)deleteWithError:;
- (id)name;
- (id)initWithSession:name:type:integerId:error:;
- (BOOL)incrementByValue:error:;
- (BOOL)decrementByValue:error:;
- (BOOL)compareValueTo:swapOnMatchWithValue:error:;
- (long long)creditsRemainingWithError:;
- (id)childBudgetWithName:maxFraction:type:error:;
- (id)childBudgetWithName:maxFraction:type:withOptions:error:;
- (id)forecastEffectiveOnDate:error:;
- (unsigned long long)integerId;
@end
