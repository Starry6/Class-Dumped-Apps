@interface SBSDebugActiveWidgetInfo : NSObject
@property (nonatomic) Q liveWidgetCount;
@property (nonatomic) Q staticWidgetCount;
@property (nonatomic) Q fakeWidgetCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBSXPCCoder:;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)encodeWithBSXPCCoder:;
- (id)succinctDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
- (id)descriptionWithMultilinePrefix:;
- (id)copyWithZone:;
- (unsigned long long)liveWidgetCount;
- (void)setLiveWidgetCount:;
- (unsigned long long)staticWidgetCount;
- (void)setStaticWidgetCount:;
- (unsigned long long)fakeWidgetCount;
- (void)setFakeWidgetCount:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
@end
