@interface CIMetalWrapper : CIFilter
@property (nonatomic) NSMutableDictionary _dict;
@property (nonatomic) NSString inputFilterName;
- (id)init;
- (void)setValue:forKey:;
- (void)dealloc;
- (id)attributes;
- (id)inputKeys;
- (id)outputImage;
- (id)_dict;
- (id)dummyImagesForImages:;
- (void)set_dict:;
- (id)inputFilterName;
- (void)setInputFilterName:;
@end
