@interface PKServiceDefaults : NSUserDefaults
@property (nonatomic) PKServicePersonality personality;
- (void)setObject:forKey:;
- (id)personality;
- (BOOL)synchronize;
- (id)initWithPersonality:;
- (id)objectForKey:;
- (void).cxx_destruct;
- (void)setPersonality:;
@end
