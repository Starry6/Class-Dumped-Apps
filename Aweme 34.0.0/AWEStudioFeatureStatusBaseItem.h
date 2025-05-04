@interface AWEStudioFeatureStatusBaseItem : NSObject
@property (nonatomic) AWEStorage storage;
@property (nonatomic) NSString persistenceKey;
- (id)initWithStorage:persistenceKey:;
- (void)setPersistenceKey:;
- (void)setStorage:;
- (id)storage;
- (id)persistenceKey;
- (void).cxx_destruct;
- (void)saveStatus:;
- (id)readStatus;
@end
