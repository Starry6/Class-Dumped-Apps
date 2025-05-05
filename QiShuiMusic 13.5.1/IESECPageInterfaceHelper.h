@interface IESECPageInterfaceHelper : NSObject
@property (nonatomic) q interfaceCounts;
@property (nonatomic) BOOL isEnableRecord;
- (long long)interfaceCounts;
- (void)cancelValidInterface;
- (BOOL)isEnableRecord;
- (BOOL)isValidInterface;
- (void)recordValidInterface;
- (void)resetValidInterface;
- (void)setInterfaceCounts:;
- (void)setIsEnableRecord:;
- (id)init;
@end
