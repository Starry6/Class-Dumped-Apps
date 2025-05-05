@interface ALSCGreenClient : NSObject
@property (nonatomic) BOOL key1Value;
@property (nonatomic) BOOL key2Value;
@property (nonatomic) BOOL key3Value;
@property (nonatomic) BOOL valuesFinalized;
- (void)setKey1Value:;
- (id)init;
- (void)setKey3Value:;
- (BOOL)_readGreenKeysFromDictionary:;
- (BOOL)valuesFinalized;
- (BOOL)key3Value;
- (BOOL)key2Value;
- (void)setKey2Value:;
- (BOOL)_attemptReadingValuesFromDiskAndUpdateFileState;
- (BOOL)key1Value;
@end
