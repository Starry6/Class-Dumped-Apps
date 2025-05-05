@interface EspressoDataFrameAttachment : NSObject
@property (nonatomic) NSString filePath;
@property (nonatomic) ^v rawPointer;
@property (nonatomic) Q offset;
@property (nonatomic) Q size;
@property (nonatomic) BOOL disabled;
- (id)filePath;
- (void)setDisabled:;
- (void)setOffset:;
- (void)setFilePath:;
- (BOOL)disabled;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (void)setSize:;
- (unsigned long long)size;
- (void)loadFromDict:frameStorage:;
- (id)rawPointer;
- (void)setRawPointer:;
+ (id)fromDict:frameStorage:;
@end
