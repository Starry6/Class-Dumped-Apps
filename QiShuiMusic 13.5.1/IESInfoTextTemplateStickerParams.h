@interface IESInfoTextTemplateStickerParams : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) NSString dependeResourceString;
- (id)absoluteResourcePath;
- (id)dependeResourceString;
- (void)setDependeResourceString:;
- (id)toDicInfo;
- (id)path;
- (id)init;
- (void)setPath:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (id)paramsWithDic:;
@end
