@interface MADVIVisualSearchGatingResult : MADResult
@property (nonatomic) NSArray resultItems;
@property (nonatomic) NSData payload;
@property (nonatomic) BOOL passedGating;
- (id)payload;
- (id)initWithCoder:;
- (id)resultItems;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResultItems:andPayload:;
- (BOOL)passedGating;
+ (BOOL)supportsSecureCoding;
@end
