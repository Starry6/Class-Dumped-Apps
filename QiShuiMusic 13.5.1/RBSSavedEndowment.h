@interface RBSSavedEndowment : NSObject
@property (nonatomic) NSObject<NSSecureCoding> endowment;
@property (nonatomic) NSString key;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithRBSXPCCoder:;
- (void)encodeWithRBSXPCCoder:;
- (id)key;
- (id)endowment;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_initWithEndowment:andKey:;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)savedEndowment:withKey:;
@end
