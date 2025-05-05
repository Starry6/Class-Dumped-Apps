@interface CNAutocompleteQueryCacheMissLogger : NSObject
@property (nonatomic) NSArray loggers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)didReturnCacheFalseNegatives:;
- (void)didReturnCacheFalsePositives:;
- (id)initWithLoggers:;
- (id)loggers;
- (void)setLoggers:;
@end
