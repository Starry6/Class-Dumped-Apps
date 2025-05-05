@interface SAWebImageResult : SAWebWebResult
@property (nonatomic) NSNumber fileSize;
@property (nonatomic) SAWebAcePicture picture;
@property (nonatomic) NSArray thumbNails;
- (id)fileSize;
- (id)groupIdentifier;
- (void)setPicture:;
- (void)setFileSize:;
- (id)encodedClassName;
- (id)picture;
- (id)thumbNails;
- (void)setThumbNails:;
+ (id)imageResult;
+ (id)imageResultWithDictionary:context:;
@end
