@interface SBSUnlockOptions : NSObject
@property (nonatomic) BOOL _aboveOtherContexts;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_setTitle:;
- (void)encodeWithXPCDictionary:;
- (id)initWithBSXPCCoder:;
- (void)_setSubtitle:;
- (id)initWithXPCDictionary:;
- (id)title;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)subtitle;
- (BOOL)_aboveOtherContexts;
- (void)_setAboveOtherContexts:;
+ (BOOL)supportsBSXPCSecureCoding;
@end
