@interface MTLAttribute : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q attributeIndex;
@property (nonatomic) Q attributeType;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL patchData;
@property (nonatomic) BOOL patchControlPointData;
+ (id)allocWithZone:;
+ (id)alloc;
@end
