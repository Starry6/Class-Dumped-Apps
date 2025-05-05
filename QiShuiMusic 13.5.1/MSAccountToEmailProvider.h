@interface MSAccountToEmailProvider : NSObject
+ (int)emailProviderFromAccountStatisticsKind:;
+ (long long)accountStatisticsKindToIdentifier:;
@end
