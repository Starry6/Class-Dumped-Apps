@interface ECSubjectParser : NSObject
+ (id)subjectWithoutPrefixForSubject:prefix:;
+ (unsigned long long)_prefixLengthForSubject:replyOnly:;
+ (BOOL)subjectHasReplyPrefix:;
+ (unsigned long long)prefixLengthForSubject:replyOnly:;
+ (unsigned long long)prefixLengthForSubject:;
+ (unsigned long long)_fastPrefixLengthForSubject:replyOnly:;
+ (id)subjectWithoutPrefixForSubject:;
+ (unsigned long long)_lastPrefixDelimiterLocationForSubject:;
+ (id)subjectWithoutPrefixIncludingListMarkersForSubject:prefix:;
@end
