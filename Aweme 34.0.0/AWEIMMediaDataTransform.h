@interface AWEIMMediaDataTransform : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)supportItemIDForMessage:;
- (id)itemIDForMessage:;
- (id)transformFromDisplayableMessage:;
- (id)instance_transformFromMessageList:requestScene:completion:;
+ (id)sharedIntance;
+ (void)transformFromMessage:needRequest:requestScene:completion:;
+ (void)transformFromItemID:needRequest:requestScene:completion:;
+ (id)p_transformFromDisplayableMessage:;
+ (id)transformFromMessageList:requestScene:completion:;
+ (id)awemeIDWithMessageDict;
+ (id)keyForItemID:;
+ (id)awemeIDWithShareUidDict;
+ (void)transformFromMessage:requestScene:completion:;
+ (void)bindMessageForAweme:withMessage:;
+ (BOOL)disableIMInputBarForAweme:;
+ (id)placeholderForMessage:;
+ (id)getMessageWithAwemeID:;
+ (id)getShareUidWithAwemeID:;
@end
