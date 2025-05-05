@interface UISSlotRemoteContent : NSObject
@property (nonatomic) I slotID;
@property (nonatomic) C contentScale;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) BOOL isRemote;
@property (nonatomic) BOOL shouldReplaceExistingContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned char)contentScale;
- (unsigned int)slotID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)contentSize;
- (BOOL)isRemote;
- (BOOL)isEqual:;
- (id)image;
- (void)deleteFromLayerContext:;
- (id)initWithContentSize:contentScale:localImage:toLayerContext:;
- (id)newTouchAuthenticationSpecificationWithAuthenticationMessageContext:hitTestInformationMask:secureName:;
- (BOOL)shouldReplaceExistingContent;
- (void)transferFromLayerContext:toLayerContextWithId:;
+ (BOOL)supportsSecureCoding;
+ (id)newLayerContext;
@end
