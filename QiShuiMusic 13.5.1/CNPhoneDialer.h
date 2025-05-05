@interface CNPhoneDialer : NSObject
+ (id)dialNumber:displayName:error:;
+ (id)URLWithPhoneNumber:;
+ (id)sanitizePhoneNumber:;
+ (id)sendDialMessage:displayName:error:;
+ (id)dialMessageWithDataValue:displayName:;
+ (BOOL)cancelDialMessage:error:;
+ (id)cancelMessageWithDialMessageID:;
+ (BOOL)sendMessage:error:;
+ (void)loadIdentityServices;
+ (id)messageWithAdditionalParameters:;
@end
