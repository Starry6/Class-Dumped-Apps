@interface IESECBSTTrackOnceCounter : NSObject
@property (nonatomic) NSMapTable containerMap;
@property (nonatomic) NSLock lock;
- (void)clearReportCountOfUniqueContainer:;
- (id)containerMap;
- (void)setContainerMap:;
- (BOOL)shouldCallWithContainer:uniqueKey:;
- (id)uniqueKeyOfUniqueObject:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)shared;
@end
