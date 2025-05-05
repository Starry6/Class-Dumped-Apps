@interface MTLLoader : NSObject
- (id)init;
- (id)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
+ (BOOL)ReadHashTable:begin:end:hashList:reader:errorHandler:handler:;
+ (BOOL)isAIRHeaderExtLoadCommand:headerOffset:headerSize:;
+ (BOOL)deserializeHashesFromAIRNTHeaderAtOffset:headerSize:reader:errorHandler:handler:;
+ (BOOL)deserializeObjectFromAIRNTHeaderAtOffset:headerSize:reader:errorHandler:handler:;
+ (BOOL)deserializePipelinesFromAIRNTHeaderAtOffset:headerSize:reader:errorHandler:handler:;
@end
