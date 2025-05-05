@interface IESProcessConfig : NSObject
@property (nonatomic) BOOL isSync;
@property (nonatomic) NSString modelPath;
- (id)initWithModel:withSync:;
- (void)setIsSync:;
- (void)setModelPath:;
- (void).cxx_destruct;
- (BOOL)isSync;
- (id)modelPath;
@end
