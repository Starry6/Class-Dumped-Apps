@interface MADPersonIdentificationResult : MADResult
@property (nonatomic) NSArray resultItems;
- (id)initWithCoder:;
- (id)resultItems;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResultItems:;
+ (BOOL)supportsSecureCoding;
@end
