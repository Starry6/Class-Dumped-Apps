@interface CSJDataPoolManager : NSObject
@property (nonatomic) NSMutableDictionary imgDataDict;
- (void)setImgDataDict:;
- (id)imgDataDict;
- (id)imgDataForKey:;
- (void)setImgData:forKey:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
