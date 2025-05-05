@interface MPPlaybackSessionCommandInfo : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString revision;
@property (nonatomic) q priority;
- (id)identifier;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)revision;
- (BOOL)isEqual:;
- (long long)priority;
+ (id)commandInfoWithIdentifier:revision:priority:;
@end
