@interface MSProtocolUtilities : NSObject
+ (id)appleIDSession;
+ (id)_urlSession;
+ (void)applyUserDefaultOverridesToResponse:;
+ (id)deviceInfoDictForPersonID:;
+ (void)fetchMPSStateWithBaseAvailabilityURL:personID:originalLibrarySize:completionBlock:;
+ (id)Win32SHA1OfUDID:;
+ (id)retryAfterDateBasedOnRetryAfterHeaderString:;
@end
