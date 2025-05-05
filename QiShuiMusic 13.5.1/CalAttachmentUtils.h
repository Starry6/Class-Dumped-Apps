@interface CalAttachmentUtils : NSObject
+ (id)localURLForAttachmentWithRelativePath:baseURL:;
+ (id)attachmentContainerWithBaseURL:;
+ (id)attachmentContainerForSourceIdentifier:calendarDataContainer:;
+ (id)legacyAttachmentContainerWithBaseURL:;
+ (id)legacyCalendarDataContainer;
+ (id)getFileSizeForPath:fileManager:error:;
+ (id)localRelativePathForLocalAbsoluteURL:localBaseURL:;
+ (BOOL)attachmentURL:matchesServerURL:;
+ (id)_stripSubdomain:;
+ (id)_knownTLDForHostname:;
@end
