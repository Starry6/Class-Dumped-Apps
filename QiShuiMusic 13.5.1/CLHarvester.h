@interface CLHarvester : NSObject
- (void)dealloc;
- (void)connect;
- (void)submitSample:;
- (id)currentStateDictionary;
@end
