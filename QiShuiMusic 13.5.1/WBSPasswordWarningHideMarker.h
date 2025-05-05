@interface WBSPasswordWarningHideMarker : NSObject
@property (nonatomic) Q issueTypes;
@property (nonatomic) NSDictionary dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)initWithIssueTypes:;
- (unsigned long long)issueTypes;
@end
