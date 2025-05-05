@interface BDUGLuckyDataListItem : BDUGLuckyBDModel
@property (nonatomic) NSString path;
@property (nonatomic) NSString replacePath;
@property (nonatomic) NSString replaceType;
- (void)setReplaceType:;
- (void)setReplacePath:;
- (id)replacePath;
- (id)replaceType;
- (id)path;
- (void)setPath:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
@end
