@interface AWEIMActiveUserNetwork : NSObject
+ (void)fetchUserActiveStatusWithSecUidList:convIdList:source:context:completion:;
+ (void)fetchUserActiveStatusWithConversionID:completion:;
+ (id)updateUserActiveStatusWithEntrance:extraParams:context:completion:;
@end
