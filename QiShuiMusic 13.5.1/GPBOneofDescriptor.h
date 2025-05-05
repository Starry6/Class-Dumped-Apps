@interface GPBOneofDescriptor : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray fields;
- (void)dealloc;
- (id)fieldWithNumber:;
- (id)fields;
- (id)fieldWithName:;
- (id)initWithName:fields:;
- (id)name;
@end
