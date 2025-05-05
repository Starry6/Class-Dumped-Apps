@interface BDUrlParser : NSObject
- (void)__parseQueryInLoop:schemaData:level:;
- (id)generateDataWithConfig:url:;
- (id)generateDataWithUrl:;
@end
