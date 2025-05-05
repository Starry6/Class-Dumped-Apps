@interface BKSAnimationFenceHandle : NSObject
@property (nonatomic) Q fenceName;
@property (nonatomic) BOOL usable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)isUsable;
- (void)dealloc;
- (void)encodeWithXPCDictionary:;
- (id)initWithBSXPCCoder:;
- (unsigned long long)fenceName;
- (unsigned int)CAPort;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (id)_initWithCAFenceHandle:;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)CAFenceHandle;
- (id)description;
- (void)invalidate;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)newFenceHandleForContext:;
+ (id)newFenceHandleForCAFenceHandle:;
+ (BOOL)supportsBSXPCSecureCoding;
@end
