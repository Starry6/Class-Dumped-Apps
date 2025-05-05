@interface C3DBinding : NSObject
@property (nonatomic) @ sourceObject;
@property (nonatomic) NSString keyPathSrc;
@property (nonatomic) NSString keyPathDst;
@property (nonatomic) NSDictionary options;
- (void)setOptions:;
- (void)dealloc;
- (id)options;
- (id)sourceObject;
- (void)setSourceObject:;
- (id)keyPathSrc;
- (void)setKeyPathSrc:;
- (id)keyPathDst;
- (void)setKeyPathDst:;
@end
