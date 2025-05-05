@interface KVSpanMatcher : NSObject
- (id)init;
- (BOOL)setItems:error:;
- (void).cxx_destruct;
- (id)indexLocaleWithUserId:error:;
- (void)prewarmIndexWithUserId:;
- (id)initWithSkitAccessProvider:resultInterpreter:;
- (id)matchSpans:userId:error:;
- (id)matchSpans:error:;
- (id)indexLocaleWithError:;
- (id)_searchSkit:userId:error:;
+ (id)indexMatcher;
+ (id)itemMatcher:locale:;
+ (id)itemMatcher:tokenizer:error:;
@end
