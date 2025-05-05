@interface AVContentKeySpecifier : NSObject
@property (nonatomic) NSData initializationData;
@property (nonatomic) NSString keySystem;
@property (nonatomic) @ identifier;
@property (nonatomic) NSDictionary options;
- (void)dealloc;
- (id)identifier;
- (id)options;
- (id)copyWithZone:;
- (id)initializationData;
- (id)keySystem;
- (id)initForKeySystem:identifier:initializationData:options:;
- (id)initForKeySystem:identifier:options:;
- (id)initForKeySystem:initializationData:;
+ (id)contentKeySpecifierForKeySystem:identifier:options:;
@end
