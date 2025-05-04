@interface AWEIMRipMediaMessage : AWEIMMessage
@property (nonatomic) NSInteger ripMediaType;
@property (nonatomic) BOOL isLivePhotoMode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithContentDict:;
- (id)contentComponentName;
- (BOOL)isLivePhotoMode;
- (void)setIsLivePhotoMode:;
- (BOOL)supportRefactorCell;
- (id)supportMessageMenuTypeList;
- (int)ripMediaType;
- (id)initWithContentDict:andOriginalType:;
- (int)p_CoventAWEIMMessageTypeToAWEIMRipMediaMessageSubType:;
- (void)setRipMediaType:;
- (id)displayText;
@end
