@interface OspreyPreferences : NSObject
- (id)connections;
- (void)synchronize;
- (void).cxx_destruct;
- (id)initWithKeychain:;
- (id)connectionPreferencesForHost:;
- (void)deleteConnectionPreferencesForHost:;
- (void)setConnectionPreferences:;
@end
