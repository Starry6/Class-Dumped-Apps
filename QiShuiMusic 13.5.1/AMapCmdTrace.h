@interface AMapCmdTrace : NSObject
@property (nonatomic) {dl_info=*^v*^v} info;
@property (nonatomic) Q address;
@property (nonatomic) Q offset;
@property (nonatomic) NSString symbolName;
@property (nonatomic) NSString fileName;
@property (nonatomic) NSString filePath;
- (id)filePath;
- (id)symbolName;
- (void)setOffset:;
- (id)fileName;
- (void)setInfo:;
- (void)setAddress:;
- (void)setFilePath:;
- (void)setSymbolName:;
- (unsigned long long)offset;
- (void).cxx_destruct;
- (id)info;
- (void)setFileName:;
- (unsigned long long)address;
@end
