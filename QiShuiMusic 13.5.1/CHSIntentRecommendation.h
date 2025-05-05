@interface CHSIntentRecommendation : NSObject
@property (nonatomic) INIntent intent;
@property (nonatomic) NSString localizedDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)intent;
- (id)initWithIntent:localizedDescription:;
- (id)localizedDescription;
- (id)initWithBSXPCCoder:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
@end
