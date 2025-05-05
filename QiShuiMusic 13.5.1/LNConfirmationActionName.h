@interface LNConfirmationActionName : NSObject
@property (nonatomic) q type;
@property (nonatomic) BOOL destructive;
@property (nonatomic) LNStaticDeferredLocalizedString acceptLabel;
@property (nonatomic) NSArray acceptAlternatives;
@property (nonatomic) LNStaticDeferredLocalizedString denyLabel;
@property (nonatomic) NSArray denyAlternatives;
- (BOOL)destructive;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithType:destructive:;
- (id)initWithType:destructive:acceptLabel:acceptAlternatives:denyLabel:denyAlternatives:;
- (id)acceptLabel;
- (id)acceptAlternatives;
- (id)denyLabel;
- (id)denyAlternatives;
+ (BOOL)supportsSecureCoding;
@end
