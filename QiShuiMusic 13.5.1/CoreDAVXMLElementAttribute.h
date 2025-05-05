@interface CoreDAVXMLElementAttribute : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString nameSpace;
@property (nonatomic) NSString value;
- (id)init;
- (void)setName:;
- (void)setNameSpace:;
- (id)nameSpace;
- (void)setValue:;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)name;
- (id)initWithNameSpace:name:value:;
@end
