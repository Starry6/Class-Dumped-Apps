@interface CDAttribute : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString fullName;
@property (nonatomic) q type;
- (id)fullName;
- (BOOL)destroyWithError:;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)setCategory:error:;
- (id)name;
- (BOOL)associateToBudget:error:;
- (BOOL)occurredWithValue:cost:error:;
- (id)temporalForecastOfValue:forHistoryWindow:forecastType:maximumElements:error:;
- (BOOL)reset:error:;
@end
