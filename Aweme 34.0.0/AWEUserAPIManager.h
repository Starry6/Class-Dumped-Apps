@interface AWEUserAPIManager : NSObject
+ (id)checkInWhenLaunch;
+ (id)logoutFrom:;
+ (id)loginWithTicket:;
+ (id)checkIn:headers:;
+ (BOOL)fetchPassportEnabled;
+ (id)fetchUser:isColdLaunch:;
+ (id)checkIn;
+ (id)checkOut;
@end
