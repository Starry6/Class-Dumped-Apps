@interface PKMentionParticipant : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString identifier;
@property (nonatomic) UIColor color;
- (id)identifier;
- (id)displayName;
- (id)color;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithDisplayName:identifier:color:;
+ (id)mentionWithDisplayName:identifier:color:;
@end
