@interface UgenV3Context : NSObject
@property (nonatomic) NSDictionary originDataDict;
- (id)mergeDictWithOriginDict:customComponentsDict:;
- (id)mergeDictWithOriginItemDict:customComponentsDict:;
- (id)originDataDict;
- (id)recommendSize;
- (void)setOriginDataDict:;
- (id)templateDictionary;
- (double)videoDuration;
- (void).cxx_destruct;
@end
