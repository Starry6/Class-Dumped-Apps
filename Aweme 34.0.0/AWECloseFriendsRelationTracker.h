@interface AWECloseFriendsRelationTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)getRelationTagWithUserID:;
+ (id)getRelationTagWithType:userID:;
+ (id)getCloseFriendsChooseTrackParamsWithType:enterFrom:userID:;
+ (id)getCloseFriendsChooseActionWithType:;
@end
