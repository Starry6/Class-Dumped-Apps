@interface SFCredentialDisplayData : NSObject
@property (nonatomic) WBSSavedAccountMatch match;
@property (nonatomic) NSString detail;
@property (nonatomic) NSDate creationDate;
- (id)detail;
- (id)match;
- (void).cxx_destruct;
- (id)creationDate;
- (id)initWithMatch:detail:creationDate:;
+ (id)descriptionForPasswordWithUser:creationDate:;
@end
