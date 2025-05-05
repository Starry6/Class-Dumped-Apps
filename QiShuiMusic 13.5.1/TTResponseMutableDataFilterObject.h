@interface TTResponseMutableDataFilterObject : NSObject
@property (nonatomic) NSString responseMutableDataFilterName;
@property (nonatomic) @? responseMutableDataFilterBlock;
- (id)initWithName:responseMutableDataFilterBlock:;
- (id)responseMutableDataFilterBlock;
- (id)responseMutableDataFilterName;
- (void)setResponseMutableDataFilterBlock:;
- (void)setResponseMutableDataFilterName:;
- (void).cxx_destruct;
@end
