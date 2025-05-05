@interface TMBPEAErrorStrategyConfig : NSObject
@property (nonatomic) NSString dataType;
@property (nonatomic) NSDictionary strategyDict;
- (id)initWithName:dict:;
- (void)setStrategyDict:;
- (id)strategyDict;
- (void)setDataType:;
- (id)dataType;
- (void).cxx_destruct;
@end
