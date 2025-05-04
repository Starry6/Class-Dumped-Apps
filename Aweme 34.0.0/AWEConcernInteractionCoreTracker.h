@interface AWEConcernInteractionCoreTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)addConcernExtraParamsForPostComment:logExtraDict:referString:aweme:;
+ (void)addCommonExtraParams:logExtraDict:referString:aweme:;
+ (void)addConcernExtraParamsForLike:logExtraDict:referString:aweme:;
+ (void)addConcernExtraParamsForEnterPersonalDetail:logExtraDict:referString:aweme:;
+ (void)addConcernExtraParamsForShareVideo:logExtraDict:referString:aweme:;
+ (void)addConcernExtraParamsForClickMoreButton:logExtraDict:referString:aweme:;
+ (void)addConcernExtraParamsForClickCommentButton:logExtraDict:referString:aweme:;
+ (void)addConcernExtraParamsForFavouriteVideo:logExtraDict:referString:aweme:;
@end
