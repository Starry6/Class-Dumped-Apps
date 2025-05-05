@interface DanceUI._UICustomContentConfiguration : NSObject
@property (nonatomic) NSString wrappedConfigurationIdentifier;
- (id)makeContentViewFor:;
- (id)updatedFor:;
- (id)updatedFor:traitCollection:;
- (id)wrappedConfigurationIdentifier;
- (id)init;
- (void).cxx_destruct;
- (id)createContentView;
@end
