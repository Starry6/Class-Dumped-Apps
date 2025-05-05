@interface PFJSONDebugDumpConverter : NSObject
@property (nonatomic) @? unknownTypeHandler;
- (void).cxx_destruct;
- (id)initWithUnknownTypeHandler:;
- (id)JSONForObject:error:;
- (id)JSONCompatibleObjectForObject:;
- (id)unknownObjectTypePlaceholderForObject:;
- (id)unknownTypeHandler;
- (void)setUnknownTypeHandler:;
@end
