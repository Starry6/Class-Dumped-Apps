@interface AWEGuestNetworkUtil : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)diggAwemeItem:isUndigg:referString:extraParam:completion:;
+ (id)follow:referString:extraParam:completion:;
+ (id)follow:referString:isUnfollow:extraParam:completion:;
+ (id)diggAwemeItem:referString:extraParam:completion:;
+ (id)undiggAwemeItem:referString:extraParam:completion:;
+ (id)unfollow:referString:extraParam:completion:;
@end
